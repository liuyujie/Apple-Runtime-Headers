//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader
{
    OCCDecryptor *mDecryptor;
}

@property(readonly, nonatomic) OCCDecryptor *decryptor; // @synthesize decryptor=mDecryptor;
- (void).cxx_destruct;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (void)useUnencryptedDocument;
- (id)defaultPassphrase;
- (void)restartReaderToUseDecryptedDocument;

@end

