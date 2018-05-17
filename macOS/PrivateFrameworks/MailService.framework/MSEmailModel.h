//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MCMessageBody, MFRecoveredMessage, NSArray, NSDate, NSString;

@interface MSEmailModel : NSObject <NSSecureCoding>
{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_fromAddress;
    NSString *_subject;
    NSDate *_dateSent;
    NSArray *_replyToAddresses;
    NSArray *_references;
    NSString *_messageID;
    NSString *_inReplyTo;
    NSArray *_htmlStringsAndAttachments;
    NSString *_snippet;
    MFRecoveredMessage *_recoveredMessage;
    MCMessageBody *_messageBody;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) MCMessageBody *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) MFRecoveredMessage *recoveredMessage; // @synthesize recoveredMessage=_recoveredMessage;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(copy, nonatomic) NSArray *htmlStringsAndAttachments; // @synthesize htmlStringsAndAttachments=_htmlStringsAndAttachments;
@property(copy, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy, nonatomic) NSArray *references; // @synthesize references=_references;
@property(copy, nonatomic) NSArray *replyToAddresses; // @synthesize replyToAddresses=_replyToAddresses;
@property(copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(copy, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
- (void).cxx_destruct;
- (id)_htmlForAttributedString:(id)arg1;
- (void)_addReplyAllRecipientsToMessage:(id)arg1 fromAddressList:(id)arg2;
- (void)generateRequestedMessageWithString:(id)arg1 messageType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateForwardedMessageWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateReplyMessageWithString:(id)arg1 replyAll:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL senderIsVIP;
- (id)searchableItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
