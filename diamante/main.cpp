#include <GL/glut.h>

void drawTriangle() {
    	
    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.8f, 1.0f); // Color celeste claro
    // Triángulo izquierda (movido aún más a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.7f, 0.9f); // Color celeste medio
	// Triángulo central (movido aún más a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.3f, 0.6f, 0.8f); // Color celeste oscuro
	// Triángulo derecha (movido aún más a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.7f, 0.9f); // Color celeste medio
	// Triángulo izquierda inferior (movido aún más a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.2f, 0.5f, 0.7f); // Otro tono de celeste oscuro
	// Triángulo central inferior (movido aún más a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 1.f, 1.0f); // Color celeste claro
	// Triángulo derecha inferior (movido aún más a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	    glColor3f(0.7f, 0.9f, 1.0f); // Otro tono de celeste claro
    // Triángulo izquierda invertido (movido aún más a la derecha)
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_TRIANGLES);
	    glColor3f(0.7f, 0.9f, 1.0f); // Otro tono de celeste claro
    // Triángulo derecha invertido (movido aún más a la derecha)
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	//----------------------------------------------
	// Color negro para las líneas
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3.0f); // Establece el grosor de las líneas a 3 píxeles

    glBegin(GL_LINE_LOOP);
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Triángulo central (movido aún más a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Triángulo derecha (movido aún más a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.0f, 0.5f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Triángulo izquierda inferior (movido aún más a la derecha)
    glVertex2f(-1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Triángulo central inferior (movido aún más a la derecha)
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	// Triángulo derecha inferior (movido aún más a la derecha)
    glVertex2f(0.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(1.5f, 0.0f); // Ajusta la coordenada x
    glVertex2f(0.0f, -3.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
    // Triángulo izquierda invertido (movido aún más a la derecha)
    glVertex2f(-1.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(0.0f, 0.5f); // Ajusta la coordenada x
    glVertex2f(-0.5f, 0.0f); // Ajusta la coordenada x
	glEnd();
	
	glBegin(GL_LINE_LOOP);
    // Triángulo derecha invertido (movido aún más a la derecha)
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
    gluOrtho2D(-4.0, 4.0, -4.0, 4.0); // Ajustado para acomodar los triángulos
    glutMainLoop();
    return 0;
}
