class CfgWeapons {
    class Binocular;
    class ACE_Vector: Binocular {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(VectorName);
        descriptionShort = CSTRING(VectorDescription);
        model = QPATHTOF(ace_vector.p3d);
        picture = QPATHTOF(UI\ace_vector_x_ca.paa);
        visionMode[] = {"Normal","NVG"};
        opticsZoomMin = "0.25/16"; // 0.25 corresponds to 1x magnification
        opticsZoomMax = "0.25/2";
        opticsZoomInit = "0.25/4";
        discretefov[] = {"0.25/2", "0.25/4", "0.25/8", "0.25/16"};
        discreteInitIndex = 1;
        modelOptics = "\A3\Weapons_F\empty.p3d";

        class CBA_ScriptedOptic {
            reticleTexture = QPATHTOF(data\reticles\ace_vector_reticle_ca.paa);
            reticleTextureSize = 1.026;
            bodyTexture = QPATHTOF(data\reticles\ace_vector_body_co.paa);
            bodyTextureSize = 1.25;
            reticleSafezoneSize = 1;
            hidePeripheralVision = 1;
            opticsPPEffects[] = {QGVAR(OpticsRadBlur1)};
            disableTilt = 1;
        };
        weaponInfoType = "ACE_RscOptics_vector";
    };

    class ACE_VectorDay: ACE_Vector {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(VectorDayName);
        visionMode[] = {"Normal"};
    };
};
