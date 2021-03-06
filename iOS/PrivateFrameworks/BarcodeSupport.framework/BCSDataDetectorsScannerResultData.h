//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCSParsedDataPrivate.h"

@class DDScannerResult, NSString;

__attribute__((visibility("hidden")))
@interface BCSDataDetectorsScannerResultData : NSObject <BCSParsedDataPrivate>
{
    long long _type;
    NSString *_extraPreviewText;
    DDScannerResult *_scannerResult;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) DDScannerResult *scannerResult; // @synthesize scannerResult=_scannerResult;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText=_extraPreviewText;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerResult:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

