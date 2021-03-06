//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_shareMetadatasToAccept;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;
- (void).cxx_destruct;
- (int)databaseScope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

