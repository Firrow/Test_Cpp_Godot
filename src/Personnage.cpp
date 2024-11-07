#include "Personnage.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void Personnage::_bind_methods() {
}

// CONSTRUCTEUR
Personnage::Personnage() {
}

// DESTRUCTEUR
Personnage::~Personnage() {
}




// Inscription de la classe pour que Godot la reconnaisse
void register_personnage_types() {
    ClassDB::register_class<Personnage>();
}

void unregister_personnage_types() {
    // Dé-inscription si nécessaire
}