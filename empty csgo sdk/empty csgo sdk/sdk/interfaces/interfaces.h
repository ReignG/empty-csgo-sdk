#pragma once

#include "app_system.h"
#include "base_client_dll.h"
#include "client_mode.h"
#include "engine_client.h"
#include "global_vars.h"
#include "gui_panel.h"
#include "gui_surface.h"
#include "interfaces.h"

namespace sdk {
	namespace interfaces {
		extern app_system*			AppSystem;
		extern gui_surface*			GuiSurface;
		extern base_client_dll*		ClientDll;
		extern global_vars*			Vars;
		extern client_mode*			ClientMode;
		extern engine_client*		EngineClient;
		extern gui_panel*			GuiPanel;

		// Initialize interfaces
		extern void RunInterfaces(void) noexcept;

		// Invalidate interfaces when finalizing
		extern void ShutdownInterfaces(void) noexcept;
	}
};