#ifndef SpringScene_hpp
#define SpringScene_hpp

#include <atlas/utils/Scene.hpp>

class SpringScene : public atlas::utils::Scene
{
	public:
		SpringScene();
		~SpringScene();
	
		void renderScene() override;
		void updateScene(double time) override;

		void mousePressEvent(int button, int action, int modifiers, double xPos, double yPos) override;		
		void mouseMoveEvent(double xPos, double yPos) override;
        void mouseScrollEvent(double xOffset, double yOffset) override;
		void keyPressEvent(int key, int scancode, int action, int mods) override;
		void screenResizeEvent(int width, int height) override;		
		void onSceneEnter() override;
        void onSceneExit() override;
		
	private:
		glm::mat4 mProjection;
		float mWidth, mHeight;

		bool mPaused;
};

#endif
