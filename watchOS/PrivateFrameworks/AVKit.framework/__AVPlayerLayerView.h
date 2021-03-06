//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerController, AVPlayerLayer;

@interface __AVPlayerLayerView : UIView
{
    AVPlayerController *_playerController;
}

+ (id)keyPathsForValuesAffectingVideoScaled;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isVideoScaled) _Bool videoScaled;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(nonatomic) int videoGravity;
@property(retain, nonatomic) AVPlayerController *playerController;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

