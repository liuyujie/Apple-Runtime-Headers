//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import "CADTestingInterface.h"

__attribute__((visibility("hidden")))
@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADTestingCloseDatabase:(CDUnknownBlockType)arg1;
- (void)CADTestingSimulateDaemonCrash;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end

