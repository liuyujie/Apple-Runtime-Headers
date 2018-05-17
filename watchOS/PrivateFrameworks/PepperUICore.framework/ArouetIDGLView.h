//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, EAGLContext;

@interface ArouetIDGLView : UIView
{
    _Bool _animating;
    _Bool _needsRebuildFrameBuffer;
    int _backingWidth;
    int _backingHeight;
    EAGLContext *_context;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    unsigned int _depthRenderbuffer;
    CADisplayLink *_displayLink;
    int _animationFrameRate;
}

+ (Class)layerClass;
@property(nonatomic) _Bool needsRebuildFrameBuffer; // @synthesize needsRebuildFrameBuffer=_needsRebuildFrameBuffer;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) int animationFrameRate; // @synthesize animationFrameRate=_animationFrameRate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned int depthRenderbuffer; // @synthesize depthRenderbuffer=_depthRenderbuffer;
@property(nonatomic) unsigned int viewFramebuffer; // @synthesize viewFramebuffer=_viewFramebuffer;
@property(nonatomic) unsigned int viewRenderbuffer; // @synthesize viewRenderbuffer=_viewRenderbuffer;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(nonatomic) int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(nonatomic) int backingWidth; // @synthesize backingWidth=_backingWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawView;
- (void)stopAnimation;
- (void)startAnimation;
- (void)rebuildFrameBufferIfNeeded;
- (void)destroyFramebuffer;
- (_Bool)createFramebuffer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
