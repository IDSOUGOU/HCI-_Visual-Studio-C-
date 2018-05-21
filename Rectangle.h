class Rectangle
{
	private:
        // Coordonnees du point HAUT-GAUCHE du rectangle
        int xHG,yHG;
        // Largeur et Hauteur du rectangle
        unsigned int largeur,hauteur;
    
   public:
        // Accesseurs
        int obtenirCoordonnee_xHG();
        int obtenirCoordonnee_xBD();
        int obtenirCoordonnee_yHG();
        int obtenirCoordonnee_yBD();
        unsigned int obtenirHauteur();
        unsigned int obtenirLargeur();
    
        // Modifieurs
        void modifierCoordonnee_xHG(int data);
        void modifierCoordonnee_yHG(int data);
        void modifierHauteur(unsigned int data);
        void modifierLargeur(unsigned int data);

        // Modifie l'instance afin qu'elle englobe les deux rectangles A et B
        void englober(Rectangle& A,Rectangle& B);
};


