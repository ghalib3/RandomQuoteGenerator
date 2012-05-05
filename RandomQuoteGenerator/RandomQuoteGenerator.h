//
//  RandomQuoteGenerator.h
//  RandomQuoteGenerator
//
//  Created by Ghalib Ahmad on 5/05/12.
//  Copyright (c) 2012 ASE Consulting Pty Ltd. All rights reserved.
//

#import <Automator/AMBundleAction.h>

@interface RandomQuoteGenerator : AMBundleAction

- (id)runWithInput:(id)input fromAction:(AMAction *)anAction error:(NSDictionary **)errorInfo;

@end
