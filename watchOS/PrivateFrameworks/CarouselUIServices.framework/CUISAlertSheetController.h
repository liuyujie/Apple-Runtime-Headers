//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICAlertSheetController.h"

@interface CUISAlertSheetController : PUICAlertSheetController
{
    _Bool _shouldDismissOnButtonPresses;
}

@property(nonatomic) _Bool shouldDismissOnButtonPresses; // @synthesize shouldDismissOnButtonPresses=_shouldDismissOnButtonPresses;
- (_Bool)handleButton:(unsigned int)arg1 eventType:(unsigned int)arg2;
- (id)initWithActions:(id)arg1 title:(id)arg2 message:(id)arg3 attributedMessage:(id)arg4 presentOverAlertEnabled:(_Bool)arg5;
- (id)initWithActions:(id)arg1 title:(id)arg2 message:(id)arg3 presentOverAlertEnabled:(_Bool)arg4;
- (id)initWithActions:(id)arg1 title:(id)arg2 message:(id)arg3;

@end

