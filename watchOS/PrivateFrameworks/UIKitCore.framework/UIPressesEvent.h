//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable, NSMutableSet, NSSet, UIPress;

@interface UIPressesEvent : UIEvent
{
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
    UIPress *_triggeringPhysicalButton;
}

@property(retain, nonatomic) UIPress *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;
- (void).cxx_destruct;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (id)_terminalRegistrantsForPressType:(int)arg1;
- (void)_unregisterForTerminalEvent:(id)arg1;
- (void)_registerForTerminalEvent:(id)arg1;
- (id)description;
- (id)_directionalPressWithStrongestForce;
- (void)_removePhysicalButton:(id)arg1;
- (void)_addGesturesForPress:(id)arg1;
- (void)_addPress:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(int)arg2;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(int)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)physicalButtonsForWindow:(id)arg1;
- (id)_allPresses;
- (id)_windows;
- (id)pressesForGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) NSSet *allPresses;
- (id)_cloneEvent;
- (void)_cleanupAfterDispatch;
- (int)subtype;
- (int)type;
- (id)_init;

@end

