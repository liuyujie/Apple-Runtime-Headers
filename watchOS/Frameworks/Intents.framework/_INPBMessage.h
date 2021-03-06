//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBMessage.h"

@class NSArray, NSString, _INPBContact, _INPBCurrencyAmountValue, _INPBDataString, _INPBDateTime, _INPBInteger, _INPBMessageLinkMetadata;

@interface _INPBMessage : PBCodable <_INPBMessage, NSSecureCoding, NSCopying>
{
    CDStruct_56d48c16 _attributes;
    struct {
        unsigned int effect:1;
        unsigned int type:1;
    } _has;
    NSArray *_attachments;
    NSString *_content;
    NSString *_conversationIdentifier;
    _INPBDateTime *_dateLastMessageRead;
    _INPBDateTime *_dateSent;
    int _effect;
    NSString *_fileExtension;
    NSString *_groupName;
    NSString *_identifier;
    _INPBMessageLinkMetadata *_linkMetadata;
    NSString *_locationName;
    _INPBInteger *_numberOfAttachments;
    _INPBCurrencyAmountValue *_paymentAmount;
    NSArray *_recipients;
    _INPBMessage *_referencedMessage;
    _INPBContact *_sender;
    _INPBDataString *_speakableGroupName;
    int _type;
}

+ (Class)recipientType;
+ (Class)attachmentType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBMessage *referencedMessage; // @synthesize referencedMessage=_referencedMessage;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(retain, nonatomic) _INPBInteger *numberOfAttachments; // @synthesize numberOfAttachments=_numberOfAttachments;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(nonatomic) int effect; // @synthesize effect=_effect;
@property(retain, nonatomic) _INPBDateTime *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) _INPBDateTime *dateLastMessageRead; // @synthesize dateLastMessageRead=_dateLastMessageRead;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasReferencedMessage;
- (id)recipientAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int recipientsCount;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) _Bool hasPaymentAmount;
@property(readonly, nonatomic) _Bool hasNumberOfAttachments;
@property(readonly, nonatomic) _Bool hasLocationName;
@property(readonly, nonatomic) _Bool hasLinkMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(readonly, nonatomic) _Bool hasFileExtension;
- (int)StringAsEffect:(id)arg1;
- (id)effectAsString:(int)arg1;
@property(nonatomic) _Bool hasEffect;
@property(readonly, nonatomic) _Bool hasDateSent;
@property(readonly, nonatomic) _Bool hasDateLastMessageRead;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (int)attributeAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int attributesCount;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
- (void)setAttributes:(int *)arg1 count:(unsigned int)arg2;
- (id)attachmentAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int attachmentsCount;
- (void)addAttachment:(id)arg1;
- (void)clearAttachments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

