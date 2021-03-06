//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRunWorkflowIntent.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBRunWorkflowIntent : PBCodable <_INPBRunWorkflowIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_workflow;
}

@property(retain, nonatomic) _INPBDataString *workflow; // @synthesize workflow=_workflow;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasWorkflow;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

