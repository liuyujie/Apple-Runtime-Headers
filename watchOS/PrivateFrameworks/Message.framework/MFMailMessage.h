//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessage.h"

#import "ECMessage.h"
#import "MFBaseMessage.h"
#import "MFMailboxPredictionMessage.h"
#import "MFPubliclyDescribable.h"

@class MFMailboxUid, MFMessageInfo, NSArray, NSDate, NSString, NSURL;

@interface MFMailMessage : MFMessage <MFMailboxPredictionMessage, ECMessage, MFBaseMessage, MFPubliclyDescribable>
{
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
    NSURL *_globalMessageURL;
    _Bool _shouldUseMailDrop;
}

+ (id)externalDataTypeIdentifiers;
+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (unsigned int)validatePriority:(int)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)forwardedMessagePrefixWithSpacer:(_Bool)arg1;
@property(nonatomic) _Bool shouldUseMailDrop; // @synthesize shouldUseMailDrop=_shouldUseMailDrop;
- (_Bool)isSearchResultWithBogusRemoteId;
- (id)bestAlternativePart:(_Bool *)arg1;
- (id)bestAlternativePart;
- (void)dealloc;
- (id)externalConversationID;
- (id)copyMessageInfo;
- (_Bool)shouldSetSummary;
- (void)setSummary:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setMutableInfoFromMessage:(id)arg1;
- (unsigned short)numberOfAttachments;
- (id)globalMessageURL;
- (id)URL;
- (id)originalMailboxURL;
- (void)setConversationFlags:(unsigned long long)arg1;
- (unsigned long long)conversationFlags;
- (id)remoteMailboxURL;
- (id)account;
@property(readonly, copy, nonatomic) NSString *mf_publicDescription;
@property(readonly, copy) NSString *description;
- (id)_privacySafeDescription;
- (id)loadMeetingMetadata;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (void)setSubject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subject;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subjectAndPrefixLength:(unsigned int *)arg1;
@property(readonly, nonatomic) MFMailboxUid *mailbox;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (int)priority;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
@property(nonatomic) unsigned long long messageFlags;
@property unsigned long long modSequenceNumber;
- (id)mailMessageStore;
- (id)messageStore;
- (_Bool)messageNeedsReindexForFlagsUpdateFromOldFlags:(unsigned long long)arg1 toNewFlags:(unsigned long long)arg2;
- (id)ccAddressList;
- (id)toAddressList;
- (id)firstSenderAddress;
@property(readonly, nonatomic) unsigned int libraryID;
@property(readonly, nonatomic, getter=isKnownToHaveAttachments) _Bool knownToHaveAttachments;
@property(readonly, nonatomic) _Bool deleted;
@property(readonly, nonatomic) long long conversationHash; // @dynamic conversationHash;
@property(readonly, nonatomic) _Bool conversationMuted;
@property(readonly, nonatomic) _Bool conversationVIP;
@property(readonly, nonatomic) _Bool senderVIP;
@property(readonly, nonatomic) _Bool junk;
@property(readonly, nonatomic) _Bool answered;
@property(readonly, nonatomic) _Bool read;
@property(readonly, nonatomic) _Bool flagged;
@property(readonly, copy, nonatomic) NSArray *from;
@property(readonly, copy, nonatomic) NSArray *listUnsubscribe;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *cc;
@property(readonly, nonatomic) long long conversationID;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(readonly, nonatomic) unsigned int dateReceivedInterval; // @dynamic dateReceivedInterval;
@property(readonly, nonatomic) unsigned int dateSentInterval; // @dynamic dateSentInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic, getter=isLibraryMessage) _Bool libraryMessage;
@property(readonly, nonatomic) unsigned int mailboxID; // @dynamic mailboxID;
@property(readonly, nonatomic) id <ECMimePart> messageBody;
@property(readonly, nonatomic) long long messageIDHash; // @dynamic messageIDHash;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy, nonatomic) NSString *remoteID;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *to;
@property(readonly, nonatomic) unsigned long uid;

@end

