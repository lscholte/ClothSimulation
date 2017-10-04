#include <atlas/utils/Application.hpp>
#include <atlas/utils/WindowSettings.hpp>
#include <atlas/gl/ErrorCheck.hpp>
#include "ClothScene.hpp"

int main()
{

	atlas::gl::setGLErrorSeverity(ATLAS_GL_ERROR_SEVERITY_HIGH | ATLAS_GL_ERROR_SEVERITY_MEDIUM);
	
	atlas::utils::WindowSettings settings;
	settings.title = "Cloth Simulation";
	settings.contextVersion = atlas::utils::ContextVersion(4, 1);
	settings.isForwardCompat = true;
	settings.windowSize = std::make_tuple(1024, 1024);
		
	auto &application = atlas::utils::Application::getInstance();
	
	application.createWindow(settings);
	
	atlas::utils::ScenePointer clothScene = std::make_unique<ClothScene>();
	
	application.addScene(std::move(clothScene));	
	application.runApplication();
	
	return 0;
}
