//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import "IMRemoteObjectCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString;

@interface IMMessageItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    _Bool _blockingRichLinks;
    _Bool _updatingDataSourcePayload;
    _Bool _backwardsCompatibleVersion;
    _Bool _isSOS;
    NSString *_subject;
    NSString *_plainBody;
    unsigned int _error;
    NSArray *_fileTransferGUIDs;
    NSAttributedString *_body;
    NSData *_bodyData;
    NSDate *_timeRead;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    NSData *_payloadData;
    NSData *_contactsAvatarRecipeData;
    NSString *_expressiveSendStyleID;
    NSDate *_timeExpressiveSendPlayed;
    NSData *_typingIndicatorIcon;
    NSDictionary *_messageSummaryInfo;
    NSDictionary *_bizIntent;
    NSString *_locale;
    NSString *_notificationIDSTokenURI;
    unsigned long long _flags;
    long long _replaceID;
    long long _expireState;
}

+ (_Bool)messageContainsSurfDD:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isSOS; // @synthesize isSOS=_isSOS;
@property(nonatomic) _Bool backwardsCompatibleVersion; // @synthesize backwardsCompatibleVersion=_backwardsCompatibleVersion;
@property(nonatomic, getter=isUpdatingDataSourcePayload) _Bool updatingDataSourcePayload; // @synthesize updatingDataSourcePayload=_updatingDataSourcePayload;
@property(retain, nonatomic) NSString *notificationIDSTokenURI; // @synthesize notificationIDSTokenURI=_notificationIDSTokenURI;
@property(nonatomic) _Bool blockingRichLinks; // @synthesize blockingRichLinks=_blockingRichLinks;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(retain, nonatomic) NSDictionary *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property(retain, nonatomic) NSData *typingIndicatorIcon; // @synthesize typingIndicatorIcon=_typingIndicatorIcon;
@property(retain, nonatomic) NSDate *timeExpressiveSendPlayed; // @synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed;
@property(retain, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property(retain, nonatomic) NSData *contactsAvatarRecipeData; // @synthesize contactsAvatarRecipeData=_contactsAvatarRecipeData;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(nonatomic) long long expireState; // @synthesize expireState=_expireState;
@property(retain, nonatomic) NSDate *timePlayed; // @synthesize timePlayed=_timePlayed;
@property(retain, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(retain, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property(nonatomic) long long replaceID; // @synthesize replaceID=_replaceID;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_error;
@property(retain, nonatomic) NSString *plainBody; // @synthesize plainBody=_plainBody;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (_Bool)isLastMessageCandidate;
- (_Bool)isFirstMessageCandidate;
- (id)description;
@property(readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSAttributedString *body; // @synthesize body=_body;
- (void)_clearBodyData;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_generateBodyTextIfNeeded;
- (void)_generateBodyDataIfNeeded;
- (void)adjustIsEmptyFlag;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)setWasDataDetected:(_Bool)arg1;
@property(readonly, nonatomic) _Bool wasDataDetected;
@property(nonatomic) _Bool hasDataDetectorResults;
@property(nonatomic) _Bool isCorrupt;
@property(readonly, nonatomic) _Bool isFromExternalSource;
@property(readonly, nonatomic) _Bool wasDowngraded;
@property(readonly, nonatomic) _Bool isSent;
@property(readonly, nonatomic) _Bool isEmote;
@property(readonly, nonatomic) _Bool isLocatingMessage;
@property(readonly, nonatomic) _Bool isTypingMessage;
@property(readonly, nonatomic) _Bool isPrepared;
@property(readonly, nonatomic) _Bool isDelivered;
- (_Bool)isFromMe;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool isExpirable;
@property(readonly, nonatomic) _Bool isAudioMessage;
@property(readonly, nonatomic) _Bool isRead;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) _Bool isAlert;
- (id)sender;
- (void)dealloc;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28 type:(long long)arg29;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 balloonBundleID:(id)arg22 payloadData:(id)arg23 expressiveSendStyleID:(id)arg24 timeExpressiveSendPlayed:(id)arg25 bizIntent:(id)arg26 locale:(id)arg27 errorType:(unsigned int)arg28;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 type:(long long)arg9;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyForBackwardsCompatibility;
- (id)copyWithFlags:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

