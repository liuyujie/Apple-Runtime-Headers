//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSUFormatObject.h>

#import "TSCHCustomFormatUpdateSupport.h"

__attribute__((visibility("hidden")))
@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatUpdateSupport>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) CDStruct_b1066b25 formatStruct; // @dynamic formatStruct;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;

@end

