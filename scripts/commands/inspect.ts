import { commandRegistry, CommandPermissionLevel, Player } from '@minecraft/server';

commandRegistry.registerCommand('engine:inspect', {
    description: 'Inspects an entity or block',
    permission: CommandPermissionLevel.Operator,
    overloads: [
        { parameters: [{ name: 'target', type: 'player' }] },
        { parameters: [] } // allow console usage without arguments
    ],
    handler: (args) => {
        const sender = args.sender;
        if (sender instanceof Player) {
            // player-specific logic
            sender.sendMessage(`Inspecting player: ${args.target?.name ?? 'self'}`);
        } else {
            // server/console logic
            console.log(`Command invoked by console`);
            // handle optional target if provided
        }
    }
});
