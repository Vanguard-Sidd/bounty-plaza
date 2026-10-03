import { system } from '@minecraft/server';
import './commands/inspect';

system.beforeEvents.startup.subscribe(() => {
    // Additional startup logic if needed
});
