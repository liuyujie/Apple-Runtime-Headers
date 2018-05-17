//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPopUpButton, NSRulerView, NSTextField, NSWindow;

@interface NSRulerViewAccessibilityPanelController : NSObject
{
    NSWindow *_accessibilityPanel;
    NSTextField *_valueField;
    NSPopUpButton *_markerTypeButton;
    NSRulerView *_rulerView;
}

@property(retain, setter=_setAccessibilityPanel:) NSWindow *_accessibilityPanel; // @synthesize _accessibilityPanel;
- (void)_cancelAddMarker:(id)arg1;
- (void)_addMarker:(id)arg1;
- (id)_markerTypeButton;
- (id)_valueField;
- (void)dealloc;
- (id)initWithRulerView:(id)arg1;
- (void)set_accessibilityPanel:(id)arg1;

@end
