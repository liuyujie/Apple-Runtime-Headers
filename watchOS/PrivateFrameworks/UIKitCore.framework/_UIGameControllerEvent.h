//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_f9ab3f29 _previousState;
    unsigned int _activeComponent;
}

- (_Bool)_processShoulder:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processRightStick:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processLeftStick:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processDPad:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_processStandardButtons:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (_Bool)_determineInputTypeAndProcess:(CDStruct_f9ab3f29 *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;
- (struct CGPoint)_leftStickPosition;
- (void)_maybeConvertAndSendAsPressesEvent;
- (void)_reset;
- (void)_sendEventToResponder:(id)arg1;
- (int)subtype;
- (int)type;

@end
