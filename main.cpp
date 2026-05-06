#include "warrior.h"
#include "mome.h"
#include <thread>
#include <chrono>
using namespace std;

void slowPrint(const string& text, int delay = 01) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

int main() {

    // ─────────────────────────────────────────
    // INTRO
    // ─────────────────────────────────────────
    slowPrint("⚔️  Welcome to... MID LIFE OF DEATH ⚔️");
    this_thread::sleep_for(chrono::milliseconds(500));
    slowPrint("A world of warriors, magic and pain.");
    slowPrint("Only the worthy may enter...");
    this_thread::sleep_for(chrono::milliseconds(800));

    cout << endl;

    // ─────────────────────────────────────────
    // GET NAME
    // ─────────────────────────────────────────
    slowPrint("🧙 Ancient Spirit: What is your name, wanderer?");
    cout << "👤 Name: ";
    string player_name;
    getline(cin, player_name);  // ✅ safe - no cin >> before this

    // ─────────────────────────────────────────
    // GET GENDER
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("🧙 Ancient Spirit: And what are you?");
    cout << "  1. Male" << endl;
    cout << "  2. Female" << endl;
    cout << "👤 Choice: ";

    int gender_choice;
    cin >> gender_choice;
    cin.ignore();   // ✅ flush leftover newline after cin >> so next getline works

    string gender_type;
    if (gender_choice == 1) {
        gender_type = "Male";
    } else if (gender_choice == 2) {
        gender_type = "Female";
    } else {
        slowPrint("❌ The spirit does not recognise you. Farewell.");
        return 0;
    }

    // ─────────────────────────────────────────
    // GET AGE
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("🧙 Ancient Spirit: How many winters have you seen?");
    cout << "👤 Age: ";
    int age;
    cin >> age;
    cin.ignore();   // ✅ flush again

    if (age < 18) {
        cout << endl;
        slowPrint("🧙 Ancient Spirit: You are too young for this world.");
        slowPrint("💀 Return when you have seen more of life...");
        return 0;
    }

    // ─────────────────────────────────────────
    // PUZZLE — GATE TO ENTER
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("🧙 Ancient Spirit: Before you enter, prove your mind.");
    this_thread::sleep_for(chrono::milliseconds(500));
    slowPrint("🧩 'I add 5 and 10, then take away 12... what remains?'");
    cout << "👤 Answer: ";

    int ans;
    cin >> ans;
    cin.ignore();

    if (ans != 3) {
        cout << endl;
        slowPrint("🧙 Ancient Spirit: Wrong... your mind is weak.");
        slowPrint("💀 The gates remain closed. Go back to the dead life.");
        return 0;
    }

    cout << endl;
    slowPrint("🧙 Ancient Spirit: Correct... you may enter.");
    this_thread::sleep_for(chrono::milliseconds(600));

    // ─────────────────────────────────────────
    // CREATE WARRIOR
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("⚡ Creating your warrior...");
    this_thread::sleep_for(chrono::milliseconds(800));

    Warrior player(player_name, gender_type, age, 100, 100, 90, 85, 95, 70, 80);

    cout << endl;

    slowPrint("🔮 And your guardian healer appears from the shadows...");
    this_thread::sleep_for(chrono::milliseconds(800));

    Mome mome("Mome", "Female", 22, 50, 100, 50, 20, 20, 2, 20,20);

    // ─────────────────────────────────────────
    // DISPLAY STATS
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("📜 === YOUR STATS ===");
    player.displayStats();

    cout << endl;
    slowPrint("📜 === YOUR HEALER ===");
    mome.displayStats();

    // ─────────────────────────────────────────
    // READY TO ENTER BATTLEFIELD
    // ─────────────────────────────────────────
    cout << endl;
    slowPrint("🧙 Ancient Spirit: The battlefield awaits you, " + player_name + "...");
    slowPrint("⚔️  Good luck. You will need it.");
    cout << endl;

    return 0;
}