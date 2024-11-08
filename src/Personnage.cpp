#include "Personnage.h"
#include <godot_cpp/core/class_db.hpp>

#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/godot.hpp>


using namespace godot;

void Personnage::_bind_methods() {
}

// CONSTRUCTEUR
Personnage::Personnage() {
    UtilityFunctions::print("Bonjour depuis GDExtension avec C++ !");
}

// DESTRUCTEUR
Personnage::~Personnage() {
}

void Personnage::_ready(){
    UtilityFunctions::print("Je suis dans _ready !!!!");
}

void Personnage::_process(double delta) {
    UtilityFunctions::print("Appel de _process() à chaque frame !");
}



// Inscription de la classe pour que Godot la reconnaisse
void register_personnage_types() {
    ClassDB::register_class<Personnage>();
}

void unregister_personnage_types() {
    // Dé-inscription si nécessaire
}