//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerRoutineClientInterface.h"

@class CLLocationManagerRoutine, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _updating;
    _Bool _updatingPredictedApplications;
    NSXPCConnection *_connection;
    id <CLLocationManagerRoutineDelegate> _delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(nonatomic) _Bool updatingPredictedApplications; // @synthesize updatingPredictedApplications=_updatingPredictedApplications;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // @synthesize locationManagerRoutine=_locationManagerRoutine;
@property(nonatomic) id <CLLocationManagerRoutineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;
- (void)didUpdatePredictedApplications:(id)arg1;
- (void)didUpdateLocations:(id)arg1;
- (void)dealloc;
- (id)initWithCLLocationManagerRoutine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

