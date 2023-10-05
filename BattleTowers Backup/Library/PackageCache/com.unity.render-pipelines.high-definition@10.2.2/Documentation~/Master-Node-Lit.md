# Lit master node

You can use the Lit master node to render custom physically based materials in the High Definition Render Pipeline (HDRP). It supports various effects, such as subsurface scattering, anisotropy, iridescence, specular color and translucency.

The Lit master node is the destination node for the Lit Shader Graph. It contains ports that you can attach to other Shader Graph nodes so you can edit properties that control the appearance of the Material. To customize the Material, you must override the inputs attached to these slots with your own values.

![](Images/HDRPFeatures-LitShader.png)

## Creating and editing a Lit Material

To create and edit a Material that uses this master node, see [Creating and Editing HDRP Shader Graphs](Customizing-HDRP-materials-with-Shader-Graph.md). When you create a Material from the Shader Graph, the properties that you exposed in the Blackboard appear in the **Exposed Properties** section.

## Properties

There are properties on the master node as well as properties on the Materials that use it. [Material properties](#material-inspector) are in the Inspector for Materials that use this Shader, and the master node properties are inside the Shader Graph itself in two sections:

- [**Master node input ports**](#master-node-input-ports): Shader Graph input ports on the master node itself. You can connect these ports to the output of other nodes or, in some cases, input your own values.
- [**Master node settings menu**](#master-node-settings-menu): Settings you can use to customize your master node and expose more input ports.

### Master node input ports

The following table describes the input ports on a Lit master node, including the property type and Shader stage used for each port. For more information on Shader stages, see [Shader stage](https://docs.unity3d.com/Packages/com.unity.shadergraph@6.9/manual/Shader-Stage.html).

| **Property**                            | **Type**          | **Stage** | **Description**                                              |
| --------------------------------------- | ----------------- | --------- | ------------------------------------------------------------ |
| **Vertex Position**                     | Vector 3          | Vertex    | The object space position of the Material per vertex.        |
| **Vertex Normal**                       | Vector 3          | Vertex    | The object space normals of the Material per vertex.         |
| **Vertex Tangent**                      | Vector 3          | Vertex    | The object space tangent of the Material per vertex.         |
| **Base Color**                          | Vector 3          | Fragment  | The color of the Material. To assign an image, connect a sampled Texture2D to this Master Node. |
| **Normal**                              | Vector 3          | Fragment  | The normal of the pixel.To modify the coordinate space, use the **Fragment Normal Space** setting. |
| **Bent Normal**                         | Vector 3          | Fragment  | The [bent normal](Glossary.md#BentNormalMap) of the fragment. |
| **Subsurface Mask**                     | Float             | Fragment  | The strength of the screen-space blur effect across the Material.<br/>This port only appears when you set **Material Type** to **Subsurface Scattering**. |
| **Tangent**                             | Vector 3          |           | Assign a Texture that defines the direction of the anisotropy effect of a pixel, in tangent space. This stretches the specular highlights in the given direction.<br/>This port only appears when you set **Material Type** to **Anisotropy**. |
| **Anisotropy**                          | Float             | Fragment  | This stretches the specular highlights in a given direction. Negative values make the effect vertical, and positive values make the effect horizontal.<br/>This port only appears when you set **Material Type** to **Anisotropy**. |
| **Thickness**                           | Float             | Fragment  | The strength of the transmission effect. Higher values mean thicker areas, and thicker areas transmit less light. Expected range 0 - 1.<br/>This port only appears when you set **Material Type** to **Subsurface Scattering** or **Translucent**. |
| **Diffusion Profile**                   | Diffusion Profile | Fragment  | Specifies which [Diffusion Profile](Diffusion-Profile.md) the Material uses for subsurface scattering and/or transmission.<br/>This port only appears when you set **Material Type** to **Subsurface Scattering** or **Translucent**. |
| **Iridescence Mask**                    | Float             | Fragment  | The strength of the iridescent effect.<br/>This port only appears when you set **Material Type** to **Iridescence**. |
| **Iridescence Layer Thickness**         | Float             | Fragment  | The thickness of the iridescence. This modifies the color of the effect.<br/>This port only appears when you set **Material Type** to **Iridescence**. |
| **Specular Color**                      | Vector 3          | Fragment  | The color of the specular highlight.<br/>This port only appears when you set **Material Type** to **Specular Color**. |
| **Coat Mask**                           | Float             | Fragment  | This simulates a clear coat effect on the Material to mimic Materials like car paint or plastics. |
| **Metallic**                            | Float             | Fragment  | The metallic value of the material, 1 for metals and 0 for non metals. |
| **Smoothness**                          | Float             | Fragment  | Every light ray that hits a smooth surface bounces off at predictable and consistent angles. For a perfectly smooth surface that reflects light like a mirror, set this to a value of 1. Less smooth surfaces reflect light over a wider range of angles (because the light hits the bumps in the microsurface), so the reflections have less detail and spread across the surface in a more diffused pattern. |
| **Ambient Occlusion**                   | Float             | Fragment  | A multiplier for the intensity of diffuse global illumination. Set this to **0** to remove all global illumination. |
| **Specular Occlusion**                  | Float             | Fragment  | A multiplier for the intensity of specular global illumination.<br/>This port only appears when you set **Specular Occlusion Mode** to **Custom**. |
| **Emission**                            | Vector 3          | Fragment  | The emission color and it’s intensity.                       |
| **Alpha**                               | Float             | Fragment  | Defines the Material's alpha value. Used for transparency and/or alpha clip. Expected range 0 - 1. |
| **Alpha Clip Threshold**                | Float             | Fragment  | Set the alpha value limit that HDRP uses to determine whether it should render each pixel. If the alpha value of the pixel is equal to or higher than the limit then HDRP renders the pixel. <br/>This port only appears when you enable the **Alpha Clipping** setting. |
| **Alpha Clip Threshold Depth Prepass**  | Float             | Fragment  | Set the alpha value limit that HDRP uses for the Transparent depth prepass.<br/>This port only appears when you set surface type to **Transparent** and enable the **Transparent Depth Prepass** setting. |
| **Alpha Clip Threshold Depth Postpass** | Float             | Fragment  | Set the alpha value limit that HDRP uses for the Transparent depth postpass.<br/>This port only appears when you enable the **Transparent Depth Postpass** setting. |
| **Alpha Clip Threshold Shadow**         | Float             | Fragment  | Set a separate threshold value for alpha clipping shadows.<br/>This port only appears when you set surface type to **Transparent** and enable the **Alpha Clipping** and **Use Shadow Threshold** setting. |
| **Specular AA Screen Space Variance**   | Float             | Fragment  | The strength of the [geometric specular anti-aliasing](Geometric-Specular-Anti-Aliasing.md) effect between 0 and 1. Higher values produce a blurrier result with less aliasing.<br/>This port only appears when you enable the **Geometric Specular AA** setting. |
| **Specular AA Threshold**               | Float             | Fragment  | The maximum value that HDRP subtracts from the smoothness value to reduce artifacts.<br/>This port only appears when you enable the **Geometric Specular AA** setting. |
| **RefractionIndex**                     |                   |           | The index of refraction defines the ratio between the speed of light in a vacuum and the speed of light in the medium of the Material. Higher values produce more intense refraction. <br/>This port only appears when you set **Refraction Model** to a value other than **None**. |
| **Transmittance Color**                 |                   |           | Refractive Materials can colorize light which passes through them. Use this input to define that color.<br/>This port only appears when you set **Refraction Model** to a value other than **None**. |
| **Transmittance Absorption Distance**   |                   |           | Set the thickness of the object at which the Transmittance Color affects incident light at full strength.<br/>This port only appears when you set **Refraction Model** to a value other than **None**. |
| **Distortion Vector**                   | Vector 2          | Fragment  | Set the distortion vector for the light passing through the Material. This port only appears when you set **Surface Type** to **Transparent** and enable the **Distortion** setting. |
| **Distortion Blur**                     | Float             | Fragment  | Set the blur intensity for the distortion.<br/>This port only appears when you set **Surface Type** to **Transparent** and enable the **Distortion** setting. |
| **Baked GI**                            | Vector 3          | Fragment  | Replaces the built-in diffuse global illumination (GI) solution with a value that you can set. This is for the front [face](Glossary.md#Face) of the Mesh only.<br/>This port only appears when you enable the **Override Baked GI** setting. |
| **Baked Back GI**                       | Vector 3          | Fragment  | Replaces the built-in diffuse global illumination (GI) solution with a value that you can set. This is for the back [face](Glossary.md#Face) of the Mesh only.<br/>This port only appears when you enable the **Override Baked GI** setting. |
| **Depth Offset**                        | Float             | Fragment  | The value that the Shader uses to increase the depth of the fragment by.<br/>This port only appears when you enable the **Depth Offset** setting. |

### Master node settings menu

To view these properties, click the gear icon in the top right of the master node.

| **Property**                         | **Description**                                              |
| ------------------------------------ | ------------------------------------------------------------ |
| **Precision**                        | Select the precision of the calculations that the Shader processes. Lower precision calculations are faster but can cause issues, such as incorrect intensity for specular highlights.<br/>&#8226; **Inherit**: Uses global precision settings. This is the highest precision setting, so using it does not result in any precision issues, but Shader calculations are slower than other values.<br/>&#8226; **Float**: Uses single-precision floating-point instructions. This makes each calculation less resource-intensive, which speeds up calculations.<br/>&#8226; **Half**: Uses half-precision floating-point instructions. This is the fastest precision level, which means that calculations that use it are the least resource-intensive to process. This precision setting is the most likely one to result in issues, such as quantization (banding) artifacts and intensity clipping. |
| **Surface Type**                     | Use the drop-down to define whether your Material supports transparency or not. Materials with the **Transparent Surface Type** are more resource intensive to render than Materials with the **Opaque** **Surface Type**. HDRP exposes more properties, depending on the **Surface Type** you select. For more information about the feature and for the list of properties each **Surface Type** exposes, see the [Surface Type documentation](Surface-Type.md). |
| **Rendering Pass**                   | Use the drop-down to set the rendering pass that HDRP processes this Material in.<br/>&#8226; **Before Refraction**: Draws the GameObject before the refraction pass. This means that HDRP includes this Material when it processes refraction. To expose this option, select **Transparent** from the **Surface Type** drop-down.<br/>&#8226; **Default**: Draws the GameObject in the default opaque or transparent rendering pass pass, depending on the **Surface Type**.<br/>&#8226; **Low Resolution**: Draws the GameObject in half resolution after the **Default** pass.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Blending mode**                    | Use the drop-down to determine how HDRP calculates the color of each pixel of the transparent Material by blending the Material with the background pixels.<br/>&#8226; **Alpha**: Uses the Material’s alpha value to change how transparent an object is. 0 is fully transparent. 1 appears fully opaque, but the Material is still rendered during the Transparent render pass. This is useful for visuals that you want to be fully visible but to also fade over time, like clouds.<br/>&#8226; **Additive**: Adds the Material’s RGB values to the background color. The alpha channel of the Material modulates the intensity. A value of 0 adds nothing and a value of 1 adds 100% of the Material color to the background color.<br/>&#8226; **Premultiply**: Assumes that you have already multiplied the RGB values of the Material by the alpha channel. This gives better results than **Alpha** blending when filtering images or composing different layers.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **- Preserve Specular Lighting**     | Enable the checkbox to make alpha blending not reduce the intensity of specular highlights. This preserves the specular elements on the transparent surface, such as sunbeams shining off glass or water.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Sorting Priority**                 | Allows you to change the rendering order of overlaid transparent surfaces. For more information and an example of usage, see the [Material sorting documentation](Renderer-And-Material-Priority.md#SortingByMaterial).<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Receive Fog**                      | Enable the checkbox to allow fog to affect the transparent surface. When disabled, HDRP does not take this Material into account when it calculates the fog in the Scene.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Back Then Front Rendering**        | Enable the checkbox to make HDRP render this Material in two separate draw calls. HDRP renders the back face in the first draw call and the front face in the second.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Transparent Depth Prepass**        | Enable the checkbox to add polygons from the transparent surface to the depth buffer to improve their sorting. HDRP performs this operation before the lighting pass and this process improves GPU performance.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Transparent Depth Postpass**       | Enable the checkbox to add polygons to the depth buffer that post-processing uses. HDRP performs this operation before the lighting pass. Enabling this feature is useful if you want to use post-processing effects that use depth information, like [motion blur](Post-Processing-Motion-Blur.md) or [depth of field](Post-Processing-Depth-of-Field.md).<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Transparent Writes Motion Vector** | Enable the checkbox to make HDRP write motion vectors for transparent GameObjects that use this Material. This allows HDRP to process effects like motion blur for transparent objects. For more information on motion vectors, see the [motion vectors documentation](Motion-Vectors.md).<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Refraction Model**                 | Use the drop-down to select the model that HDRP uses to process refraction.<br/>&#8226; **None**: No refraction occurs. Select this option to disable refraction.<br/>&#8226; **Box**: A box-shaped model where incident light enters through a flat surface and leaves through a flat surface. Select this option for hollow surfaces.<br/>&#8226; **Sphere**: A sphere-shaped model that produces a magnifying glass-like effect to refraction. Select this option for solid surfaces.<br/>&#8226; **Thin**: A thin box surface type, equivalent to Box with a fixed thickness of 5cm. Select this for thin window-like surfaces.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Distortion**                       | Enable the checkbox to distort the light passing through this transparent Material.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **- Distortion Blend Mode**          | Set the mode HDRP uses to blend overlaid distortion surfaces.<br/>This setting only appears when you set **Surface Type** to **Transparent** and enable the **Distortion** setting. |
| **- Distortion Depth Test**          | Check this box to make GameObjects that are closer to the Camera hide the distortion effect, otherwise you can always see the effect. If you do not enable this feature then the distortion effect appears on top of the rendering.<br/>This setting only appears when you set **Surface Type** to **Transparent** and enable the **Distortion** setting. |
| **Depth Write**                      | Enable the checkbox to make HDRP write depth values for transparent GameObjects that use this Material.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Cull Mode**                        | Use the drop-down to select which face to cull for transparent GameObjects that use this Material. To expose this option, select **Transparent** from the **Surface Type** drop-down.<br/>&#8226; **Front:** Culls the front face of the geometry.<br/>&#8226; **Back:** Culls the back face of the geometry.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Depth Test**                       | Unity uses DepthTest when rendering an object, to check if it is behind another object. Unity does this by testing the z-value of a given Objects pixel and comparing against a value stored in the depth buffer. By default, DepthTest is set to Less Equal, allowing the original object to appear in front of the object it is tested against. Use the drop-down to select the comparison function to use for the depth test. Each comparison function changes how the Shader renders. To expose this option, select Transparent from the Surface Type drop-down.<br/>• **Disabled**: Do not perform a depth test.<br/>• **Never**: The depth test never passes.<br/>• **Less**: The depth test passes if the pixel's z-value is less than the stored value.<br/>• **Equal**: The depth test passes if the pixel's z-value is equal to the stored value.<br/>• **Less Equal**: The depth test passes if the pixel's z-value is less than or equal than the Z-buffers value. This renders the tested pixel in front of the other.<br/>• **Greater**: The depth test passes if the pixel's z-value is greater than the stored value.<br/>• **Not Equal**: The depth test passes if the pixel's z-value is not equal to the stored value.<br/>• **Greater Equal**: The depth test passes if the pixel's z-value is greater than or equal to the stored value.<br/>• **Always**: The depth test always passes, there is no comparison to the stored value.<br/>This setting only appears when you set **Surface Type** to **Transparent.** |
| **Double Sided**                     | Enable this setting to make HDRP render both faces of the polygons in your geometry. For more information about the feature and for the list of properties this feature exposes, see the [Double-Sided documentation](Double-Sided.md). |
| **Fragment Normal Space**            | Use this drop-down to select the type of Normal Map space that this Material uses.<br/>&#8226; **TangentSpace:** Defines the normals in [tangent space](Glossary.md#TangentSpaceNormalMap). Use this to tile a Texture on a Mesh. The normal map Texture must be BC7, BC5, or DXT5nm format.<br/>&#8226; **ObjectSpace:** Defines the normals in [object space](Glossary.md#ObjectSpaceNormalMap). Use this for planar-mapping GameObjects like the terrain. The normal map must be an RGB Texture .<br/>&#8226; **WorldSpace:** Defines the normal maps in world space. |
| **Alpha Clipping**                   | Enable this setting to make this Material act like a Cutout Shader. HDRP then discards pixels with an alpha value below the **Threshold** value. |
| **Use Shadow Threshold**             | Enable this setting to set another threshold value for alpha clipping shadows. |
| **Material Type**                    | The **Material Type** property allows you to give your Material a type, which allows you to customize it with different settings depending on the **Material Type** you select. For information on the available Material Types, see [Material Type](Material-Type.md). |
| **Transmission**                     | Enable the checkbox to make HDRP simulate the translucency of an object using a thickness map. Configure subsurface scattering and transmission settings using a [Diffusion Profile](Diffusion-Profile.md). For more information, see documentation on [Subsurface Scattering](Subsurface-Scattering.md).<br/>This setting only appears when you set **Material Type** to **Subsurface Scattering** |
| **Energy Conserving Specular**       | Enable the checkbox to make HDRP reduce the diffuse color of the Material if the specular effect is more intense. This makes the lighting of the Material more consistent, which makes the Material look more physically accurate.<br/>This port only appears when you set **Material Type** to **Specular Color** |
| **Receive Decals**                   | Enable the checkbox to allow HDRP to draw decals on this Material’s surface. |
| **Receive SSR (Transparent)**        | Enable this setting to make HDRP include this Material when it processes the screen space reflection pass. There is a separate option for transparent Surface Type. |
| **Add Precomputed Velocity**         | Enable this setting to use precomputed velocity information stored in an Alembic file. |
| **Geometric Specular AA**            | Enable this setting to make HDRP perform geometric anti-aliasing on this Material. This modifies the smoothness values on surfaces of curved geometry to remove specular artifacts. For more information about the feature and for the list of properties this feature exposes, see the [Geometric Specular Anti-aliasing documentation](Geometric-Specular-Anti-Aliasing.md). |
| **Specular Occlusion Mode**          | Set the mode that HDRP uses to calculate specular occlusion.<br/>&#8226; **Off**: Disables specular occlusion.<br/>&#8226; **From AO**: Calculates specular occlusion from the ambient occlusion map and the Camera's view vector.<br/>&#8226; **From AO and Bent Normal**: Calculates specular occlusion from the ambient occlusion map, the bent normal map, and the Camera's view vector.<br/>&#8226; **Custom**: Allows you to specify your own specular occlusion values. |
| **Override Baked GI**                | Enable this setting to expose two baked GI [input ports](#master-node-input-ports). This makes this Materials ignore global illumination in your Scene and, instead, allows you to provide your own global illumination values and customize the way this Material looks. |
| **Depth Offset**                     | Enable this setting to expose the **DepthOffset** [input port](#master-node-input-ports) which you can use to increase the depth value of the fragment and push it away from the Camera. |
| **DOTS instancing**                  | Enable GPU Instancing for use with the Hybrid Renderer.      |
| **Support LOD CrossFade**            | Indicates whether HDRP processes dithering when moving from one LOD level to another when sampling Textures. |

### Material Inspector

These properties are in the **Exposed Properties** section of the Inspector and sit alongside the properties that you exposed in the Shader Graph's Blackboard. If you set **Override ShaderGUI** to `true`, the Material Properties section does not appear, and instead, the ShaderGUI you specified appears.

| **Property**                           | **Description**                                              |
| -------------------------------------- | ------------------------------------------------------------ |
| **Enable GPU Instancing**              | Enable the checkbox to tell HDRP to render Meshes with the same geometry and Material in one batch when possible. This makes rendering faster. HDRP cannot render Meshes in one batch if they have different Materials, or if the hardware does not support GPU instancing. For example, you cannot [static-batch](https://docs.unity3d.com/Manual/DrawCallBatching.html) GameObjects that have an animation based on the object pivot, but the GPU can instance them. |
| **Emission**                           | Defines the Material's emission color value. Expects positive values. |
| **Motion Vector For Vertex Animation** | Enable the checkbox to make HDRP write motion vectors for GameObjects that use vertex animation. This removes the ghosting that vertex animation can cause. |