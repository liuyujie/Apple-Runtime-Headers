//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields, _INPBContact, _INPBDataString, _INPBDateTime, _INPBInteger;

@interface _INPBMessage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _attributes;
    NSString *_content;
    NSString *_conversationIdentifier;
    _INPBDateTime *_dateLastMessageRead;
    _INPBDateTime *_dateSent;
    int _effect;
    NSString *_identifier;
    _INPBInteger *_numberOfAttachments;
    NSMutableArray *_recipients;
    _INPBMessage *_referencedMessage;
    _INPBContact *_sender;
    _INPBDataString *_speakableGroupName;
    int _type;
    struct {
        unsigned int effect:1;
        unsigned int type:1;
    } _has;
}

+ (Class)recipientType;
+ (id)options;
@property(retain, nonatomic) _INPBDateTime *dateLastMessageRead; // @synthesize dateLastMessageRead=_dateLastMessageRead;
@property(retain, nonatomic) _INPBInteger *numberOfAttachments; // @synthesize numberOfAttachments=_numberOfAttachments;
@property(retain, nonatomic) _INPBMessage *referencedMessage; // @synthesize referencedMessage=_referencedMessage;
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *dateSent; // @synthesize dateSent=_dateSent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDateLastMessageRead;
@property(readonly, nonatomic) BOOL hasNumberOfAttachments;
- (int)StringAsEffect:(id)arg1;
- (id)effectAsString:(int)arg1;
@property(nonatomic) BOOL hasEffect;
@property(nonatomic) int effect; // @synthesize effect=_effect;
@property(readonly, nonatomic) BOOL hasReferencedMessage;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasSpeakableGroupName;
@property(readonly, nonatomic) BOOL hasConversationIdentifier;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasDateSent;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) BOOL hasContent;
@property(readonly, nonatomic) BOOL hasSender;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
- (void)dealloc;

@end
