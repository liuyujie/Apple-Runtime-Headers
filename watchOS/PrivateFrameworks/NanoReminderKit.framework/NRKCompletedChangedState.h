//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDateComponents, NSString;

@interface NRKCompletedChangedState : NSObject <NSCopying>
{
    _Bool _reminderCompleted;
    NSString *_reminderId;
    NSDate *_completionDate;
    unsigned int _recurringReminderState;
    int _overrideDisplayOrder;
    NSDateComponents *_dueDateComponents;
}

@property(retain, nonatomic) NSDateComponents *dueDateComponents; // @synthesize dueDateComponents=_dueDateComponents;
@property(nonatomic) int overrideDisplayOrder; // @synthesize overrideDisplayOrder=_overrideDisplayOrder;
@property(nonatomic) unsigned int recurringReminderState; // @synthesize recurringReminderState=_recurringReminderState;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(nonatomic) _Bool reminderCompleted; // @synthesize reminderCompleted=_reminderCompleted;
@property(retain, nonatomic) NSString *reminderId; // @synthesize reminderId=_reminderId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReminderId:(id)arg1 reminderCompleted:(_Bool)arg2;

@end
