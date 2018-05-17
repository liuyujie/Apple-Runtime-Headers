//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDDecoding.h"
#import "NSCopying.h"

@class HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableAccountOwner : PBCodable <HDDecoding, NSCopying>
{
    NSData *_birthDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSString *_name;
}

@property(retain, nonatomic) NSData *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasBirthDate;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasMedicalRecord;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;
- (_Bool)applyToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
