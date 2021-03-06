//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPComponentReader.h>

@class TSPDescriptionGenerator;

__attribute__((visibility("hidden")))
@interface TSPDescriptionComponentReader : TSPComponentReader
{
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo *)arg1 stream:(struct DispatchDataInputStream *)arg2;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo *)arg2 message:(auto_ptr_4370f086 *)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(auto_ptr_945ad503)arg5 unknownContent:(id)arg6;
- (_Bool)shouldValidateComponentsOfInMemoryObjects;
- (_Bool)shouldProceedParsingOnFailure;
- (void)read;
- (id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4;

@end

