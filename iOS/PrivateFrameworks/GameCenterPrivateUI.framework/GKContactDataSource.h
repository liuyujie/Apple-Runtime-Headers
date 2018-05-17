//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSArray, NSDictionary;

@interface GKContactDataSource : NSObject
{
    NSArray *_contacts;
    NSArray *_sectionHeaders;
    NSDictionary *_sectionToContactIndexes;
    NSArray *_skipValues;
    NSDictionary *_skipToContactIndexes;
    CNContactStore *_store;
    void *_addressBook;
}

@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSDictionary *skipToContactIndexes; // @synthesize skipToContactIndexes=_skipToContactIndexes;
@property(retain, nonatomic) NSArray *skipValues; // @synthesize skipValues=_skipValues;
@property(retain, nonatomic) NSDictionary *sectionToContactIndexes; // @synthesize sectionToContactIndexes=_sectionToContactIndexes;
@property(retain, nonatomic) NSArray *sectionHeaders; // @synthesize sectionHeaders=_sectionHeaders;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)localizedSectionIndices;
- (id)localizedSectionHeaders;
- (id)sectionHeadersDictionary;
- (void)loadContactsWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
