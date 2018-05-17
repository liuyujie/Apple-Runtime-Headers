//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRDataType.h"
#import "CREquatable.h"
#import "NSCopying.h"

@class CRRegisterLatest, NSString;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable>
{
    id <CRDataType><CRCoding> _value;
    CRRegisterLatest *_index;
}

+ (id)temporaryElementWithValue:(id)arg1;
@property(retain, nonatomic) CRRegisterLatest *index; // @synthesize index=_index;
@property(retain, nonatomic) id <CRDataType><CRCoding> value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)tombstone;
- (void)setDocument:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeIntoProtobufSetElement:(struct Dictionary_Element *)arg1 coder:(id)arg2;
- (id)initWithProtobufSetElement:(const struct Dictionary_Element *)arg1 decoder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
