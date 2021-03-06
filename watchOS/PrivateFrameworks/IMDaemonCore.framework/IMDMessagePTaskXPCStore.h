//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDMessagePTaskStore.h"

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>
{
}

- (_Bool)updateTaskFlagsForPTask:(id)arg1;
- (_Bool)deleteAllCompletedTasks;
- (id)loadMostRecentMessagePTasks;
- (_Bool)storePTask:(id)arg1;
- (_Bool)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
- (_Bool)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(int)arg2;
- (id)_networkCall_IMDMessagePTaskSelectWithLimit:(int)arg1;
- (_Bool)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

