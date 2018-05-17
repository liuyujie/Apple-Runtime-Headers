//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CNUIPropertyListRepresentation : NSObject
{
    NSDictionary *_propertyList;
    NSDictionary *_attachments;
}

+ (id)writePropertyList:(id)arg1 toURL:(id)arg2 dataProxy:(id)arg3 fileManager:(id)arg4;
+ (id)propertyListWithContentsOfPackageURL:(id)arg1 dataProxy:(id)arg2;
@property(readonly, copy) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy) NSDictionary *propertyList; // @synthesize propertyList=_propertyList;
- (void).cxx_destruct;
- (id)attachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPropertyList:(id)arg1 attachments:(id)arg2;

@end
