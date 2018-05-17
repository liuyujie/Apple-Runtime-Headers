//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICActionSheetItem.h"

#import "NMUFeedbackActionItem.h"

@class NMUNowPlayingFeedbackViewController, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _NMUFeedbackActionSheetItem : PUICActionSheetItem <NMUFeedbackActionItem>
{
    _Bool _visible;
    UIColor *_accessoryViewActiveTintColor;
    NMUNowPlayingFeedbackViewController *_controller;
    int _representedFeedbackAction;
}

@property(nonatomic) int representedFeedbackAction; // @synthesize representedFeedbackAction=_representedFeedbackAction;
@property(nonatomic) __weak NMUNowPlayingFeedbackViewController *controller; // @synthesize controller=_controller;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(copy, nonatomic) UIColor *accessoryViewActiveTintColor; // @synthesize accessoryViewActiveTintColor=_accessoryViewActiveTintColor;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
@property(nonatomic, getter=isActive) _Bool active; // @dynamic active;
@property(nonatomic, getter=isEnabled) _Bool enabled;

@end
