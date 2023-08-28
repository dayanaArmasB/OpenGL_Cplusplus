#include <GL/glut.h>

void drawTriangle() {
    	
    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.8f, 1.0f); // Color celeste claro
    // Tri�ngulo izquierda (movido a�n m�s a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.7f, 0.9f); // Color celeste medio
	// Tri�ngulo central (movido a�n m�s a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.3f, 0.6f, 0.8f); // Color celeste oscuro
	// Tri�ngulo derecha (movido a�n m�s a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.7f, 0.9f); // Color celeste medio
	// Tri�ngulo izquierda inferior (movido a�n m�s a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.2f, 0.5f, 0.7f); // Otro tono de celeste oscuro
	// Tri�ngulo central inferior (movido a�n m�s a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 1.f, 1.0f); // Color celeste claro
	// Tri�ngulo derecha inferior (movido a�n m�s a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	    glColor3f(0.7f, 0.9f, 1.0f); // Otro tono de celeste claro
    // Tri�ngulo izquierda invertido (movido a�n m�s a la derecha)
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	    glColor3f(0.7f, 0.9f, 1.0f); // Otro tono de celeste claro
    // Tri�ngulo derecha invertido (movido a�n m�s a la derecha)
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	//----------------------------------------------
	// Color negro para las l�neas
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f); // Establece el grosor de las l�neas a 3 p�xeles

    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Tri�ngulo central (movido a�n m�s a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Tri�ngulo derecha (movido a�n m�s a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Tri�ngulo izquierda inferior (movido a�n m�s a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Tri�ngulo central inferior (movido a�n m�s a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Tri�ngulo derecha inferior (movido a�n m�s a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
    // Tri�ngulo izquierda invertido (movido a�n m�s a la derecha)
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
    // Tri�ngulo derecha invertido (movido a�n m�s a la derecha)
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawTriangle();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 350);
    glutCreateWindow("DIAMANTE");
    glutDisplayFunc(display);
   	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Fondo negro
   	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Fondo blanco
    gluOrtho2D(-4.0, 4.0, -4.0, 4.0); // Ajustado para acomodar los tri�ngulos
    glutMainLoop();
    return 0;
}
