--- chrome/browser/memory_details_linux.cc.orig	2019-04-08 08:32:44 UTC
+++ chrome/browser/memory_details_linux.cc
@@ -72,8 +72,10 @@ ProcessData GetProcessDataMemoryInformation(
 
     std::unique_ptr<base::ProcessMetrics> metrics(
         base::ProcessMetrics::CreateProcessMetrics(pid));
+#if !defined(OS_BSD)
     pmi.num_open_fds = metrics->GetOpenFdCount();
     pmi.open_fds_soft_limit = metrics->GetOpenFdSoftLimit();
+#endif
 
     process_data.processes.push_back(pmi);
   }
