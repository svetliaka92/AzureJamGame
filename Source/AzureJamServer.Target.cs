using UnrealBuildTool;
using System.Collections.Generic;

public class AzureJamServerTarget : TargetRules
{
    public AzureJamServerTarget(TargetInfo target) : base (target)
    {
        Type = TargetType.Server;
        ExtraModuleNames.Add("AzureJamServer");
    }
}
