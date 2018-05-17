//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOResourceManifestConfiguration, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKModelObject : NSObject
{
    _Bool _active;
    unsigned int _needsLayout;
    unsigned int _needsDisplay;
    struct CartographicLayer *_renderLayer;
    VKSharedResources *_sharedResources;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    id <MDRenderTarget> _renderTarget;
}

@property(readonly, nonatomic) id <MDRenderTarget> renderTarget; // @synthesize renderTarget=_renderTarget;
@property(readonly, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) struct CartographicLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
- (void)gglLayoutSceneWithoutStyleManager:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)runAnimation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)reset;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 manifestConfiguration:(id)arg2;
- (_Bool)shouldLayoutWithoutStyleManager;
@property(readonly, nonatomic) shared_ptr_a3c46825 styleManager;

@end
