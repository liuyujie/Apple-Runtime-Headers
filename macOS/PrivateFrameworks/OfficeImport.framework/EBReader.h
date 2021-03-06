//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader
{
    NSString *mTemporaryDirectory;
    struct XlObjectFactory *mXlObjectFactory;
    BOOL mUseStringOptimization;
    BOOL mIsFileStructuredStorage;
    const void *mBuffer;
}

@property(nonatomic) BOOL isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) BOOL useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct XlBinaryReader *xlReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (id)read;
- (BOOL)start;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

