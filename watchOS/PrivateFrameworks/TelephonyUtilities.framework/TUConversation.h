//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet, NSString, NSUUID, TUContactsDataProvider, TUHandle;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _audioEnabled;
    _Bool _videoEnabled;
    _Bool _locallyCreated;
    TUContactsDataProvider *_contactsDataProvider;
    NSUUID *_UUID;
    NSUUID *_groupUUID;
    int _state;
    NSSet *_participantHandles;
    NSSet *_remoteMembers;
    NSSet *_activeRemoteParticipants;
    int _avcSessionToken;
    NSUUID *_messagesGroupUUID;
    TUHandle *_initiator;
    NSString *_messagesGroupName;
}

+ (_Bool)supportsSecureCoding;
+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)arg1;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(retain, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(nonatomic) int avcSessionToken; // @synthesize avcSessionToken=_avcSessionToken;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(copy, nonatomic) NSSet *participantHandles; // @synthesize participantHandles=_participantHandles;
@property(nonatomic, getter=isLocallyCreated) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqualToConversation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
- (_Bool)isRepresentedByRemoteMembers:(id)arg1;
- (id)initiatorLocalizedName;
- (id)displayName;
- (id)description;
- (id)initWithUUID:(id)arg1 groupUUID:(id)arg2;

@end

