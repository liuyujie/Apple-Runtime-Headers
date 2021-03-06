//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventViewController.h>

#import "EKEditItemViewControllerProtocol.h"

@class EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol>
{
    EKCalendarEventInvitationNotificationAttendee *_proposedTimeAttendee;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property(retain) EKUIRecurrenceAlertController *recurrenceAlertController; // @synthesize recurrenceAlertController=_recurrenceAlertController;
@property(retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee; // @synthesize proposedTimeAttendee=_proposedTimeAttendee;
- (void).cxx_destruct;
- (void)invokeAction:(int)arg1;
- (id)_statusButtons;
- (id)items;
- (id)viewTitle;
- (id)proposedTime;
- (id)initWithProposedTimeAttendee:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
@property(nonatomic) _Bool useCustomBackButton;

@end

