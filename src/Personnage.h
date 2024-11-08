#ifndef PERSONNAGE_H
#define PERSONNAGE_H

//#include <godot_cpp/classes/object.hpp>
//#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp\classes\character_body2d.hpp>

namespace godot {

	class Personnage : public CharacterBody2D {
		GDCLASS(Personnage, CharacterBody2D);
	
	private:
	
	protected:
		static void _bind_methods();
	
	public:
		Personnage();
		~Personnage();

		void _ready() override;
		void _process(double delta) override;
	};

}

#endif

// ~~~AJOUTER UN NOEUD HÉRITÉ D'UN AUTRE DANS LA HIÉRARCHIE
// AJOUTER UN NOEUD SANS PARENT (Object) DANS LA HIÉRARCHIE