# OLE: Open Lua (Game) Engine

This Game engine is developed for people who have used [roblox studio](https://create.roblox.com/), and want to leave the platform.
You can program in lua, just like in roblox.

> What if roblox studio was open source and completely free?
**This is what OLE offers.**

# Updates & Documentation
This code is maintained only by one developer ([me](https://github.com/Perseo-code)). Can take a long time to even actually work. \
Still, I will try to at least add lots of comments, along with an user and developer guide.

# Tiny Example

```Lua
local player = game.Players.LocalPlayer
local gui = player.gui
local screengui = gui.screengui
local label = screengui.label
local rstorage = game.ReplicatedStorage
local event = rstorage:WaitForChild("event")

event.OnEvent:Connect(function ()
    print("Event")
end)
```

## License

OLE uses the GPLv3 license, for more details, click [here](LICENSE)

Copyright (C) 2026 Perseo-code