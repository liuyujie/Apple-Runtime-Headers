//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMCoreAutomationNotifications : NSObject
{
    int _chatsWrittenCount;
    int _messagesWrittenCount;
    int _attachmentsWrittenCount;
}

+ (id)sharedInstance;
@property(readonly) int attachmentsWrittenCount; // @synthesize attachmentsWrittenCount=_attachmentsWrittenCount;
@property(readonly) int messagesWrittenCount; // @synthesize messagesWrittenCount=_messagesWrittenCount;
@property(readonly) int chatsWrittenCount; // @synthesize chatsWrittenCount=_chatsWrittenCount;
- (void)addNewMessagesSyncedCount:(int)arg1;
- (void)addNewAttachmentsSyncedCount:(int)arg1;
- (void)addNewChatsSyncedCount:(int)arg1;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(_Bool)arg2;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(_Bool)arg2;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(_Bool)arg2 messagesDidSync:(_Bool)arg3 attachmentsDidSync:(_Bool)arg4;
- (void)clearSyncCounts;
- (id)init;

@end

