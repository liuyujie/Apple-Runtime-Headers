//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFunctionRow, NSFunctionRowBackgroundColorView, NSTouchBarViewController;

__attribute__((visibility("hidden")))
@interface NSSystemModalTouchBarOverlay : NSObject
{
    NSFunctionRow *_functionRow;
    NSTouchBarViewController *_viewController;
    NSFunctionRowBackgroundColorView *_colorView;
    BOOL _useOverlayAnimations;
}

- (void)minimize;
- (void)dismiss;
- (void)showTouchBar:(id)arg1 placement:(long long)arg2 systemTrayIdentifier:(id)arg3;
- (void)dealloc;

@end
