#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <godot_cpp/classes/object.hpp>

namespace godot {

	class Personnage : public Object {
		GDCLASS(Personnage, Object);
	
	private:
	
	protected:
		static void _bind_methods();
	
	public:
		Personnage();
		~Personnage();
	};

}

#endif

//VOIR POUR FAIRE EN SORTE D'AJOUTER UN NOEUD DANS LA HIÉRARCHIE