//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UICanvasLifecycleStateTransitioning.h"

@protocol _UICanvasLifecycleStateMonitoring <_UICanvasLifecycleStateTransitioning>
@property(nonatomic, getter=_suspendedUnderLock, setter=_setSuspendedUnderLock:) _Bool suspendedUnderLock;
@property(nonatomic, getter=_runningInTaskSwitcher, setter=_setRunningInTaskSwitcher:) _Bool runningInTaskSwitcher;
@property(nonatomic, getter=_suspendedEventsOnly, setter=_setSuspendedEventsOnly:) _Bool suspendedEventsOnly;
@property(nonatomic, getter=_isActive, setter=_setIsActive:) _Bool active;
@property(nonatomic, getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:) _Bool respondingToLifecycleEvent;
@property(readonly, nonatomic, getter=_hasLifecycle) _Bool hasLifecycle;
@end
