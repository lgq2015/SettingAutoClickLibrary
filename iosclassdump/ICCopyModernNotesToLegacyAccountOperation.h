//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray;

@interface ICCopyModernNotesToLegacyAccountOperation : NSOperation
{
    NSArray *_sourceNotes;
    id <ICLegacyFolder> _destinationFolder;
    CDUnknownBlockType _didCopyBlock;
}

- (void).cxx_destruct;
- (id)copyNote:(id)arg1 toFolder:(id)arg2;
- (id)dataForAttachment:(id)arg1;
@property(retain, nonatomic) id <ICLegacyFolder> destinationFolder; // @synthesize destinationFolder=_destinationFolder;
@property(copy, nonatomic) CDUnknownBlockType didCopyBlock; // @synthesize didCopyBlock=_didCopyBlock;
- (id)ensureLegacyFolderIsValid:(id)arg1;
- (id)htmlAttributesForAttachment:(id)arg1 legacyContentID:(id)arg2 tagName:(id *)arg3;
- (id)init;
- (id)initWithNotes:(id)arg1 toFolder:(id)arg2 didCopyBlock:(CDUnknownBlockType)arg3;
- (id)legacyManagedObjectContext;
- (void)main;
@property(copy, nonatomic) NSArray *sourceNotes; // @synthesize sourceNotes=_sourceNotes;

@end
